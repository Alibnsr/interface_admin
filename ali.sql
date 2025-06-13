-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Hôte : 127.0.0.1:3306
-- Généré le : mar. 18 mars 2025 à 13:16
-- Version du serveur : 8.2.0
-- Version de PHP : 8.2.13

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de données : `ecofit`
--

-- --------------------------------------------------------

--
-- Structure de la table `report`
--

DROP TABLE IF EXISTS `report`;
CREATE TABLE IF NOT EXISTS `report` (
  `id` int NOT NULL AUTO_INCREMENT,
  `category` varchar(255) COLLATE utf8mb4_general_ci NOT NULL,
  `description` text COLLATE utf8mb4_general_ci NOT NULL,
  `created_at` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=16 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Déchargement des données de la table `report`
--

INSERT INTO `report` (`id`, `category`, `description`, `created_at`) VALUES
(12, 'qsdsq', 'qsdqsadsdqqsdadsa', '2025-01-12 22:30:40'),
(13, 'fenetre_ouverte', 'test', '2025-03-08 12:02:43'),
(14, 'machine_cassee', 'test', '2025-03-08 12:02:51'),
(15, 'machine_cassee', 'test', '2025-03-08 12:03:42');

-- --------------------------------------------------------

--
-- Structure de la table `sensors`
--

DROP TABLE IF EXISTS `sensors`;
CREATE TABLE IF NOT EXISTS `sensors` (
  `id` int NOT NULL AUTO_INCREMENT,
  `type` varchar(50) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `value` float NOT NULL,
  `status` varchar(20) COLLATE utf8mb4_general_ci NOT NULL,
  `humidite` float DEFAULT NULL,
  `temperature` float NOT NULL,
  `created_at` timestamp NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=22 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Déchargement des données de la table `sensors`
--

INSERT INTO `sensors` (`id`, `type`, `value`, `status`, `humidite`, `temperature`, `created_at`) VALUES
(1, 'DHT11', 1, 'Actif', 37, 24.2, '2025-02-21 10:39:25'),
(2, 'DHT11', 24.8, 'Actif', 36, 24.8, '2025-03-18 13:16:01'),
(3, 'DHT11', 24.8, 'Actif', 36, 24.8, '2025-03-18 13:16:04'),
(4, 'DHT11', 24.8, 'Actif', 36, 24.8, '2025-03-18 13:16:06'),
(5, 'DHT11', 24.8, 'Actif', 36, 24.8, '2025-03-18 13:16:08'),
(6, 'DHT11', 24.8, 'Actif', 36, 24.8, '2025-03-18 13:16:10'),
(7, 'DHT11', 24.8, 'Actif', 36, 24.8, '2025-03-18 13:16:12'),
(8, 'DHT11', 24.8, 'Actif', 36, 24.8, '2025-03-18 13:16:14'),
(9, 'DHT11', 24.8, 'Actif', 36, 24.8, '2025-03-18 13:16:16'),
(10, 'DHT11', 24.8, 'Actif', 36, 24.8, '2025-03-18 13:16:18'),
(11, 'DHT11', 24.8, 'Actif', 36, 24.8, '2025-03-18 13:16:20'),
(12, 'DHT11', 24.8, 'Actif', 36, 24.8, '2025-03-18 13:16:22'),
(13, 'DHT11', 24.8, 'Actif', 36, 24.8, '2025-03-18 13:16:24'),
(14, 'DHT11', 24.8, 'Actif', 36, 24.8, '2025-03-18 13:16:26'),
(15, 'DHT11', 24.8, 'Actif', 36, 24.8, '2025-03-18 13:16:28'),
(16, 'DHT11', 24.8, 'Actif', 36, 24.8, '2025-03-18 13:16:30'),
(17, 'DHT11', 24.8, 'Actif', 36, 24.8, '2025-03-18 13:16:32'),
(18, 'DHT11', 24.8, 'Actif', 37, 24.8, '2025-03-18 13:16:34'),
(19, 'DHT11', 24.8, 'Actif', 38, 24.8, '2025-03-18 13:16:36'),
(20, 'DHT11', 24.8, 'Actif', 38, 24.8, '2025-03-18 13:16:38'),
(21, 'DHT11', 24.8, 'Actif', 38, 24.8, '2025-03-18 13:16:40');

-- --------------------------------------------------------

--
-- Structure de la table `users`
--

DROP TABLE IF EXISTS `users`;
CREATE TABLE IF NOT EXISTS `users` (
  `id` int NOT NULL AUTO_INCREMENT,
  `name` varchar(255) COLLATE utf8mb4_general_ci NOT NULL,
  `password` varchar(255) COLLATE utf8mb4_general_ci NOT NULL,
  `email` varchar(255) COLLATE utf8mb4_general_ci NOT NULL,
  `reset_token` varchar(255) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `user_role` varchar(50) COLLATE utf8mb4_general_ci NOT NULL DEFAULT 'user',
  PRIMARY KEY (`id`),
  UNIQUE KEY `email_unique` (`email`)
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Déchargement des données de la table `users`
--

INSERT INTO `users` (`id`, `name`, `password`, `email`, `reset_token`, `user_role`) VALUES
(1, 'mohamed', '$2y$10$beO.s0/Jtq2Jn3DBidfHQ.MkBkh6lOCFnE/Uo4.5T2332TPFL2SHm', 'mohamedkhelifaproo@gmail.com', NULL, 'admin'),
(8, 'ziyad', '$2y$10$m/gKCuOp56kIxnwlxSKN1uDYvAaLTc.h8fjzTkb005UetUAVJwJkS', 'z.aitgouzoult@gmail.com', NULL, 'admin');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
